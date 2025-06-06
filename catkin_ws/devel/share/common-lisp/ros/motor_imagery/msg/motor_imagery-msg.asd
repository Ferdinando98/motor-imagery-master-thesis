
(cl:in-package :asdf)

(defsystem "motor_imagery-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "GrabAction" :depends-on ("_package_GrabAction"))
    (:file "_package_GrabAction" :depends-on ("_package"))
    (:file "GrabActionFeedback" :depends-on ("_package_GrabActionFeedback"))
    (:file "_package_GrabActionFeedback" :depends-on ("_package"))
    (:file "GrabActionGoal" :depends-on ("_package_GrabActionGoal"))
    (:file "_package_GrabActionGoal" :depends-on ("_package"))
    (:file "GrabActionResult" :depends-on ("_package_GrabActionResult"))
    (:file "_package_GrabActionResult" :depends-on ("_package"))
    (:file "GrabAndReleaseAction" :depends-on ("_package_GrabAndReleaseAction"))
    (:file "_package_GrabAndReleaseAction" :depends-on ("_package"))
    (:file "GrabAndReleaseActionFeedback" :depends-on ("_package_GrabAndReleaseActionFeedback"))
    (:file "_package_GrabAndReleaseActionFeedback" :depends-on ("_package"))
    (:file "GrabAndReleaseActionGoal" :depends-on ("_package_GrabAndReleaseActionGoal"))
    (:file "_package_GrabAndReleaseActionGoal" :depends-on ("_package"))
    (:file "GrabAndReleaseActionResult" :depends-on ("_package_GrabAndReleaseActionResult"))
    (:file "_package_GrabAndReleaseActionResult" :depends-on ("_package"))
    (:file "GrabAndReleaseFeedback" :depends-on ("_package_GrabAndReleaseFeedback"))
    (:file "_package_GrabAndReleaseFeedback" :depends-on ("_package"))
    (:file "GrabAndReleaseGoal" :depends-on ("_package_GrabAndReleaseGoal"))
    (:file "_package_GrabAndReleaseGoal" :depends-on ("_package"))
    (:file "GrabAndReleaseResult" :depends-on ("_package_GrabAndReleaseResult"))
    (:file "_package_GrabAndReleaseResult" :depends-on ("_package"))
    (:file "GrabFeedback" :depends-on ("_package_GrabFeedback"))
    (:file "_package_GrabFeedback" :depends-on ("_package"))
    (:file "GrabGoal" :depends-on ("_package_GrabGoal"))
    (:file "_package_GrabGoal" :depends-on ("_package"))
    (:file "GrabResult" :depends-on ("_package_GrabResult"))
    (:file "_package_GrabResult" :depends-on ("_package"))
    (:file "MoveAction" :depends-on ("_package_MoveAction"))
    (:file "_package_MoveAction" :depends-on ("_package"))
    (:file "MoveActionFeedback" :depends-on ("_package_MoveActionFeedback"))
    (:file "_package_MoveActionFeedback" :depends-on ("_package"))
    (:file "MoveActionGoal" :depends-on ("_package_MoveActionGoal"))
    (:file "_package_MoveActionGoal" :depends-on ("_package"))
    (:file "MoveActionResult" :depends-on ("_package_MoveActionResult"))
    (:file "_package_MoveActionResult" :depends-on ("_package"))
    (:file "MoveFeedback" :depends-on ("_package_MoveFeedback"))
    (:file "_package_MoveFeedback" :depends-on ("_package"))
    (:file "MoveGoal" :depends-on ("_package_MoveGoal"))
    (:file "_package_MoveGoal" :depends-on ("_package"))
    (:file "MoveResult" :depends-on ("_package_MoveResult"))
    (:file "_package_MoveResult" :depends-on ("_package"))
    (:file "ReleaseAction" :depends-on ("_package_ReleaseAction"))
    (:file "_package_ReleaseAction" :depends-on ("_package"))
    (:file "ReleaseActionFeedback" :depends-on ("_package_ReleaseActionFeedback"))
    (:file "_package_ReleaseActionFeedback" :depends-on ("_package"))
    (:file "ReleaseActionGoal" :depends-on ("_package_ReleaseActionGoal"))
    (:file "_package_ReleaseActionGoal" :depends-on ("_package"))
    (:file "ReleaseActionResult" :depends-on ("_package_ReleaseActionResult"))
    (:file "_package_ReleaseActionResult" :depends-on ("_package"))
    (:file "ReleaseFeedback" :depends-on ("_package_ReleaseFeedback"))
    (:file "_package_ReleaseFeedback" :depends-on ("_package"))
    (:file "ReleaseGoal" :depends-on ("_package_ReleaseGoal"))
    (:file "_package_ReleaseGoal" :depends-on ("_package"))
    (:file "ReleaseResult" :depends-on ("_package_ReleaseResult"))
    (:file "_package_ReleaseResult" :depends-on ("_package"))
  ))