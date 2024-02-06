using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Services.Analytics;
using Unity.Services.Core;
using Unity.Services.Core.Analytics;
using UnityEngine.UI;
using System;

public class UGS_Analytics : MonoBehaviour
{
    public Text text;
    [System.Obsolete]
    async void Start()
    {
        try
        {
            await UnityServices.InitializeAsync();
            GiveConsent(); // Get user consent according to various legislations
            LevelCompletedCustomEvent();
        }
        catch (ConsentCheckException e)
        {
            Debug.Log(e.ToString());
        }

        
    }

    [System.Obsolete]
    private void LevelCompletedCustomEvent()
    {
        DateTime currentTime = DateTime.Now;
        // Check if the platform is mobile or PC
        string platformInfo = (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer) ? "mobile" : "PC";
        text.text = platformInfo + "_날짜: \n" + currentTime;
        // Define Custom Parameters
        Dictionary<string, object> parameters = new Dictionary<string, object>()
        {
            { "levelName", platformInfo + "_날짜: \n" + currentTime}
        };

        // The ‘levelCompleted’ event will get cached locally
        //and sent during the next scheduled upload, within 1 minute
        AnalyticsService.Instance.CustomData("levelCompleted", parameters);

        // You can call Events.Flush() to send the event immediately
        //테스트 중에만 사용하길 권장(서버에 즉시 데이터를 전송하는 메소드)
         AnalyticsService.Instance.Flush();
         
    }

    public void GiveConsent()
    {
        // 다양한 법률에 따라 사용자 동의를 받습니다
        AnalyticsService.Instance.StartDataCollection();
        Debug.Log($"Consent has been provided. The SDK is now collecting data!");
    }
}