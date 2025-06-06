
(cl:in-package :asdf)

(defsystem "thesis_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "AngularVelocity" :depends-on ("_package_AngularVelocity"))
    (:file "_package_AngularVelocity" :depends-on ("_package"))
    (:file "DesiredWaypoint" :depends-on ("_package_DesiredWaypoint"))
    (:file "_package_DesiredWaypoint" :depends-on ("_package"))
    (:file "Error" :depends-on ("_package_Error"))
    (:file "_package_Error" :depends-on ("_package"))
    (:file "FingerJoints" :depends-on ("_package_FingerJoints"))
    (:file "_package_FingerJoints" :depends-on ("_package"))
    (:file "LinearVelocity" :depends-on ("_package_LinearVelocity"))
    (:file "_package_LinearVelocity" :depends-on ("_package"))
    (:file "Orientation" :depends-on ("_package_Orientation"))
    (:file "_package_Orientation" :depends-on ("_package"))
    (:file "Position" :depends-on ("_package_Position"))
    (:file "_package_Position" :depends-on ("_package"))
  ))