#ifndef _CameraConsumerFactory_H_
#define _CameraConsumerFactory_H_

#include "config.h"
#include "CameraConsumer.hpp"

class CameraConsumerFactory {
    public:
        static CameraConsumer* getCameraConsumer();
};

#endif // !_CameraConsumerFactory_H_
