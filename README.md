# Unbrick EFM8UB3 Thunderboard development board using an Arduino

The EFM8UB3 Thunderboard development board from Silicon Labs has a
strange failure mode where you can get it into a state where the
on-board JLink debugger can no longer reset the MCU. This makes it
look like you've totally bricked the board. But you haven't!

You can use an Arduino to drive the C2 programming interface pins on
the Thunderboard to recover to a state where the on-board debugger can
talk to the MCU again.

This is all explained in more detail in a [blog
article](https://skybluetrades.net/unbricking-efm8ub3-thunderboard/).

This repository comes in two parts:

## The unbricker

This is a simple Arduino sketch in the `unbricker` directory. It uses
code from https://github.com/conorpp/efm8-arduino-programmer for all
the C2 programming interface communication. It's written to use an
Arduino MKR WiFi 1010, because that's what I had lying around, but you
can adapt it to use more or less any Arduino board, just by changing
the pin numbers used for the `C2D` data and `C2CK` clock signals.

To use it:

1. Connect the Thunderboard and Arduino together on a breadboard. You
   want to wire things up things up like this:

Arduino | Thunderboard | &nbsp;
:--- | :--- | :---
`GND` | `GND` |
`VCC` | `3V3` |
Digital pin `0` | `P2.0` | `C2D` data connection
Digital pin `1` | `RST` | `C2CK` clock connection

2. Make sure the "Power Source" selection switch on your Thunderboard
   is set to "`DBG USB`".

3. Connect the Arduino to your PC and flash the `unbricker.ino` sketch
   onto it.

4. Start the serial monitor from the Arduino IDE.

5. Send an "`unbrick`" command to the Arduino over the serial monitor.

That's it! If it works, you should be able to disconnect your
Thunderboard from the Arduino, connect a USB cable to the
Thunderboard's JLink USB port and talk to it again using JLink
Commander or whatever other programming software you use.


## A demonstration `brick-it` program

You probably don't want to run this. I wrote it to test that the
unbricker works reliably. It's a small C program made to be compiled
with SDCC that misconfigures the clocks on the EFM8UB3 in a way that
prevents the Thunderboard's JLink debugger from communicating with the
MCU.

Really, you probably don't want to run it. I'm not even going to write
any instructions here...
