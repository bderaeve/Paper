float value_temp = 0;
byte temp[2];

// TEMPERATURE SENSOR RANGE: -40° -> +125° 
value_temp = readValue(SENS_TEMPERATURE);

value_temp += TEMPERATURE_OFFSET; //+= 40	
value_temp *= 100; // 2 DECIMALS ACCURACY	
			
temp[0] = MSByte(value_temp);	
temp[1] = LSByte(value_temp);	