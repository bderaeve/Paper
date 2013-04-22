uint16_t indicator = 1;
for(int i=0; i<NUM_SENSORS; i++) 
{
  if(indicator & mask)
  {
	(*Inserter[i])(&pos, packetData);	
    error = 0;
  }
  indicator <<= 1;
}