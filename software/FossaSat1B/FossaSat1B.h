// C++ libraries
#include <string.h>

// Arduino libraries
#include <Wire.h>

// FOSSA libraries
#include <FOSSA-Comms.h>

// contributed libraries
#include <aes.h>
#include <INA226.h>
#include <LowPower.h>

// RadioLib
#define RADIOLIB_STATIC_ONLY
#include <RadioLib.h>

// files
#include "communication.h"
#include "configuration.h"
#include "debugging_utilities.h"
#include "deployment.h"
#include "persistent_storage.h"
#include "pin_interface.h"
#include "power_control.h"
#include "system_info.h"
