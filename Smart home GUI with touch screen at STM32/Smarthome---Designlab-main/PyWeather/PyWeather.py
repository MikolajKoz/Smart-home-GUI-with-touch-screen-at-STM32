
# import the module
from signal import signal
import python_weather
import asyncio
import os

import serial


def sendData(weather):
	data = [weather.current.temperature, 7]
	data_array = bytearray(data)
	ser = serial.Serial('COM3', 115200, timeout=1, parity=serial.PARITY_NONE)
	#print(ser.write(weather.current.temperature.to_bytes(1, 'big', signed=True)))
	print(ser.write(data_array))
	#ser.write(int(-99).to_bytes(1, 'big', signed=True))

async def getweather():
	# declare the client. format defaults to the metric system (celcius, km/h, etc.)
	async with python_weather.Client(format=python_weather.METRIC) as client:

		# fetch a weather forecast from a city
		weather = await client.get("Cracow")
  
		# returns the current day's forecast temperature (int)
		print(weather.current.temperature)

		# get the weather forecast for a few days
		for forecast in weather.forecasts:
			print(forecast.date, forecast.astronomy)

			# hourly forecasts
			for hourly in forecast.hourly:
				print(f' --> {hourly!r}')

		sendData(weather)

if __name__ == "__main__":
	# see https://stackoverflow.com/questions/45600579/asyncio-event-loop-is-closed-when-getting-loop
	# for more details
	if os.name == "nt":
		asyncio.set_event_loop_policy(asyncio.WindowsSelectorEventLoopPolicy())

		asyncio.run(getweather())