using System;
using System.Collections.Generic;

namespace Unity.Services.Analytics
{
    public class LevelCompletedEvent : Event
    {
        public LevelCompletedEvent() : base("levelCompleted")
        {
        }

        //public int LevelIndex { set { SetParameter("levelIndex", value); } }
        public string LevelName { set { SetParameter("levelName", value); } }
        //public int Score { set { SetParameter("score", value); } }
    }

    public static class CustomEventSample
    {
        public static void RecordCustomEventWithNoParameters()
        {
            // NOTE: this will show up on the dashboard as an invalid event, unless
            // you have created a schema that matches it.
            AnalyticsService.Instance.RecordEvent("levelCompleted");
        }

        public static void RecordCustomEventWithParameters()
        {
            LevelCompletedEvent levelCompletedEvent = new LevelCompletedEvent()
            {
                LevelName = "World 1-3"
            };

            AnalyticsService.Instance.RecordEvent(levelCompletedEvent);
        }
    }
}
