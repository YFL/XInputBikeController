#pragma once

#include <cstdint>

namespace MyDamnNamespace
{

class BikeController
{
public:
  BikeController() = default;

public:
  constexpr static uint8_t ThrottlePin = 0;
  constexpr static uint8_t HandleBarPin = 0;
  constexpr static uint8_t FrontBrakePin = 0;
  constexpr static uint8_t RearBrakePin = 0;
  constexpr static uint8_t LeanPin = 0;
  constexpr static uint8_t ClutchPin = 0;

  constexpr static uint8_t XPin = 0;
  constexpr static uint8_t YPin = 0;
  constexpr static uint8_t APin = 0;
  constexpr static uint8_t BPin = 0;
  constexpr static uint8_t UpPin = 0;
  constexpr static uint8_t DownPin = 0;
  constexpr static uint8_t LeftPin = 0;
  constexpr static uint8_t RightPin = 0;
  constexpr static uint8_t LeftBumperPin = 0; // L3
  constexpr static uint8_t RightBumperPin = 0; // R3
  constexpr static uint8_t LeftStickPin = 0;
  constexpr static uint8_t RightStickPin = 0;
  constexpr static uint8_t StartPin = 0;
  constexpr static uint8_t OptionsPin = 0;

public:
  auto Init() -> void;
  auto Update() -> void;

public:
  auto GetThrottle() const -> uint16_t
  { return Throttle; }

  auto GetHandleBar() const -> uint16_t
  { return HandleBar; }

  auto GetFrontBrake() const -> uint16_t
  { return FrontBrake; }

  auto GetRearBrake() const -> uint16_t
  { return RearBrake; }

  auto GetLean() const -> uint16_t
  { return Lean; }

  auto GetClutch() const -> uint16_t
  { return Clutch; }

  auto GetButtonMask() const -> uint16_t
  { return ButtonMask; }

private:
  uint16_t Throttle = 0; // No throttle
  uint16_t HandleBar = 0; // Center
  uint16_t FrontBrake = 0; // No brake
  uint16_t RearBrake = 0; // No brake
  uint16_t Lean = 0; // Center
  uint16_t Clutch = 0; // No clutch

  uint16_t ButtonMask = 0;
};

} // namespace MyDamnNamespace