#include "abstraction/CameraConsumerFactory.hpp"

#ifdef env_simulation

#include "abstraction/SimulationCameraConsumer.hpp"


CameraConsumer* CameraConsumerFactory::getCameraConsumer() {
    return new SimulationCameraConsumer();
}

#endif // env_simulation

#ifdef env_car


#endif // env_car