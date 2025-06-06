#include "ros/ros.h"

#include "sensor_msgs/JointState.h"
#include "motor_image/sendInitState.h"

class InitStateSender {

    private:
        ros::NodeHandle nh_;
        ros::ServiceServer initServer_;

        double JOINT_1_;
        double JOINT_2_;
        double JOINT_3_;
        double JOINT_4_;
        double JOINT_5_;
        double JOINT_6_;
        double JOINT_7_;

        bool sendInitJointState(motor_image::sendInitState::Request& req, motor_image::sendInitState::Response& res) {

            std::vector<double> initJointState = {
                JOINT_1_,
                JOINT_2_,
                JOINT_3_,
                JOINT_4_,
                JOINT_5_,
                JOINT_6_,
                JOINT_7_
            };

            res.initJointState = initJointState;
            ROS_INFO("Initial joint state sended");
            return true;

        }

    public:

        InitStateSender() {

            if (nh_.hasParam("/JOINT_1")) {
                ros::param::get("/JOINT_1", JOINT_1_);
            }
            else {
                JOINT_1_ = 2.912;
            }

            if (nh_.hasParam("/JOINT_2")) {
                ros::param::get("/JOINT_2", JOINT_2_);
            }
            else {
                JOINT_2_ = 0.427;
            }

            if (nh_.hasParam("/JOINT_3")) {
                ros::param::get("/JOINT_3", JOINT_3_);
            }
            else {
                JOINT_3_ = 0.665;
            }

            if (nh_.hasParam("/JOINT_4")) {
                ros::param::get("/JOINT_4", JOINT_4_);
            }
            else {
                JOINT_4_ = 1.262;
            }

            if (nh_.hasParam("/JOINT_5")) {
                ros::param::get("/JOINT_5", JOINT_5_);
            }
            else {
                JOINT_5_ = -0.323;
            }

            if (nh_.hasParam("/JOINT_6")) {
                ros::param::get("/JOINT_6", JOINT_6_);
            }
            else {
                JOINT_6_ = 0.943;
            }

            if (nh_.hasParam("/JOINT_7")) {
                ros::param::get("/JOINT_7", JOINT_7_);
            }
            else {
                JOINT_7_ = 5.240;
            }
            

            initServer_ = nh_.advertiseService("/initial_joint_state", &InitStateSender::sendInitJointState, this);
            ROS_INFO("Ready to send initial joint state");
            ros::spin();

        }

};

int main(int argc, char** argv) {

    ros::init(argc, argv, "init_state_server");

    InitStateSender InitStateSender;

    return 0;

} 