;; Auto-generated. Do not edit!


(when (boundp 'thesis_msgs::Position)
  (if (not (find-package "THESIS_MSGS"))
    (make-package "THESIS_MSGS"))
  (shadow 'Position (find-package "THESIS_MSGS")))
(unless (find-package "THESIS_MSGS::POSITION")
  (make-package "THESIS_MSGS::POSITION"))

(in-package "ROS")
;;//! \htmlinclude Position.msg.html


(defclass thesis_msgs::Position
  :super ros::object
  :slots (_x _y _z ))

(defmethod thesis_msgs::Position
  (:init
   (&key
    ((:x __x) 0.0)
    ((:y __y) 0.0)
    ((:z __z) 0.0)
    )
   (send-super :init)
   (setq _x (float __x))
   (setq _y (float __y))
   (setq _z (float __z))
   self)
  (:x
   (&optional __x)
   (if __x (setq _x __x)) _x)
  (:y
   (&optional __y)
   (if __y (setq _y __y)) _y)
  (:z
   (&optional __z)
   (if __z (setq _z __z)) _z)
  (:serialization-length
   ()
   (+
    ;; float64 _x
    8
    ;; float64 _y
    8
    ;; float64 _z
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _x
       (sys::poke _x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _y
       (sys::poke _y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _z
       (sys::poke _z (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _x
     (setq _x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _y
     (setq _y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _z
     (setq _z (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get thesis_msgs::Position :md5sum-) "4a842b65f413084dc2b10fb484ea7f17")
(setf (get thesis_msgs::Position :datatype-) "thesis_msgs/Position")
(setf (get thesis_msgs::Position :definition-)
      "float64 x
float64 y
float64 z
")



(provide :thesis_msgs/Position "4a842b65f413084dc2b10fb484ea7f17")


