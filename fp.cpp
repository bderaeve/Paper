uint8_t error = 2;
uint8_t pos = 2;
uint16_t indicator = 1;
for(int i=0; i<NUM_SENSORS; i++) 
{
  if(indicator & sensor_mask)
  {
	(*Inserter[i])(&pos, packetData);	
        error = 0;
  }
  indicator <<= 1;
}