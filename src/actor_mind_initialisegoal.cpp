#include "headers.h"

// Module #3000

actorMindGoal_Status_e _actorMindInitialiseGoal(actorMindInst_s* mind,
                                                actorMindGoal_s* goal) {
    actorInst_s* actor = actorMindInstGetActor(mind);
    switch (actorMindGoalGetId(goal)) {
        case actorMindGoalId_WaitForFlag: {
            actorMindGoal_Wait_s* wait =
                static_cast<actorMindGoal_Wait_s*>(goal);
            wait->runtime.time = mlRndInstFloatRange(mlRndGetGlobalPtr(),
                                                     wait->extra.timeMin,
                                                     wait->extra.timeMax);
            break;
        }
        default:
            return actorMindGoal_Status_Processing;
    }
    return actorMindGoal_Status_Achieved;
}
