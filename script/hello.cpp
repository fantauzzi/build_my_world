#include <iostream>
#include <gazebo/gazebo.hh>

namespace gazebo {
    class WorldPluginMyRobot : public WorldPlugin {
    public:
        WorldPluginMyRobot() : WorldPlugin() {
            std::cout << "Hello World!" << std::endl;
        }

    public:
        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
        }
    };

    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}