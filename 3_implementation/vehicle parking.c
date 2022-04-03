struct car_management
{
	int car_number ;
	int car_row ;
	int car_column ;
  int car_type ;
  struct tm *at;
} ;
void column_change ( struct car_management *v )
{
	v -&gt; car_column--;
}


struct tm* datetime()
{
int ts,amp;

           time_t ts;
        struct tm *ct;


        ts = time(NULL);
        ct = localtime(&amp,ts);

}
















































