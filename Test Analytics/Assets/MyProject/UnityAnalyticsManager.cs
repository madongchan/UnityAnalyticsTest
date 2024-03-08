using System.Collections.Generic;
using Unity.Services.Analytics;


//2020년도 유니티 버전에서는 이 코드가 유용함
public static class UnityAnalyticsManager
{
    public enum EVENT_KEY
    {
        USER_QUIT_LOG,
        INSIDEAREA_SELECTION,
        EVENT_ENCOUNTERS
    }
    private static Dictionary<EVENT_KEY, string> eventKeys;
    private static Dictionary<string, Dictionary<string, object>> eventParameters;

    static UnityAnalyticsManager()
    {
        eventKeys = new Dictionary<EVENT_KEY, string>() {
            { EVENT_KEY.USER_QUIT_LOG, "user_quit_log" },
            { EVENT_KEY.INSIDEAREA_SELECTION, "insidearea_selection" },
            { EVENT_KEY.EVENT_ENCOUNTERS, "event_encounters" }
        };

        eventParameters = new Dictionary<string, Dictionary<string, object>>() {
            { eventKeys[EVENT_KEY.USER_QUIT_LOG], new Dictionary<string, object>() },
            { eventKeys[EVENT_KEY.INSIDEAREA_SELECTION], new Dictionary<string, object>() },
            { eventKeys[EVENT_KEY.EVENT_ENCOUNTERS], new Dictionary<string, object>() }
        };
    }

    // Unity Analytics로의 이벤트 전송
    public static void SendEvent(EVENT_KEY keyType, params KeyValuePair<string, object>[] pairs)
    {
        var paramDict = eventParameters[eventKeys[keyType]];
        foreach (var pair in pairs)
        {
            if (paramDict.ContainsKey(pair.Key))
            {
                paramDict[pair.Key] = pair.Value;
            }
            else
            {
                paramDict.Add(pair.Key, pair.Value);
            }
        }
        // Debug.Log($"이벤트 이름: {eventKeys[keyType]}\n" +
        //   $"이벤트 파라미터 이름: {string.Join(", ", paramDict.Keys)}\n" +
        //   $"이벤트 파라미터 값: {string.Join(", ", paramDict.Values)}");

        AnalyticsService.Instance.CustomData(eventKeys[keyType], paramDict);
        //AnalyticsService.Instance.Flush();
    }
}
