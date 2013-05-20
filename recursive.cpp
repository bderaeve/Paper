uint16_t pos = 0;
for(uint16_t i=1; i<LCM; i++) 
{
  if( isTime2Wake(i) )
    times2wake[pos++] = i;
}

bool isTime2Wake(uint16_t & value)
{
  static uint8_t i = 0;
  if( !value % sortedIntervals[i] )
    {i = 0;  return true;}
  else if( ++i == nrActiveSensors )
    return false;
  isTime2Wake(value);
}