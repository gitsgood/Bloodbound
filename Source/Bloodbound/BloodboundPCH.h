// ﻿Copyright © 2026-2027 Liliana Maksysko, Marcus Engebakken Grønland (a.k.a. Victoria), Marharyta Klochkova (a.k.a. Rain), and Christoforos Khouri. All Rights Reserved.

#pragma once

#ifndef BLOODBOUNDPCH_H
#define BLOODBOUNDPCH_H

// Standard UE inclusions
#include "CoreMinimal.h"
#include "Engine/Engine.h"

#include "Kismet/GameplayStatics.h"		// This is so often used, it GOES here.
#include "Engine/GameInstance.h"

// Custom made classes I want to have everywhere automatically
#include "Utils/LoggingMacrosControlPanel.h"

// The subsystem classes we made, either for settings or saving. Whatever the case, they probably ought to go here...
#include "Utils/BB_SettingsSubsystem.h"


#endif // !BLOODBOUNDPCH_H