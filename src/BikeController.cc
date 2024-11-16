#include <BikeController.h>

#include <Arduino.h>

namespace MyDamnNamespace
{

auto BikeController::Init() -> void
{
  for (auto i = ThrottlePin; i <= ClutchPin; ++i)
    pinMode(i, INPUT);

  for (auto i = XPin; i <= OptionsPin; ++i)
    pinMode(i, INPUT_PULLDOWN);
}

auto BikeController::Update() -> void
{
  Throttle = analogRead(ThrottlePin);
  HandleBar = analogRead(HandleBarPin);
  FrontBrake = analogRead(FrontBrakePin);
  RearBrake = analogRead(RearBrakePin);
  Lean = analogRead(LeanPin);
  Clutch = analogRead(ClutchPin);

  ButtonMask = 0;
  for (auto i = 0u; i < OptionsPin - XPin + 1; ++i)
  {
    if (digitalRead(XPin + i))
      ButtonMask |= 1 << i;
  }
}

} // namespace MyDamnNamespace