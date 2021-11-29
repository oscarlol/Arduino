/*********************************************************************
 * *                                                                **
 * *                            Titol:                              **
 * *                        nom del programa                        **
 * *                                                                **
 * *  Nom:Oscar Pradas                             Data:xx/xx/2021  **
 * ******************************************************************/
//************************** INCLUDE *********************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
Serial.begin(9600);
Serial.print("Your HD is ");
Serial.println(drive_gb);
drive_mb = drive_gb;
drive_mb = drive_mb * 1024;
drive_kb = drive_mb * 1024;
Serial.print("In theory, it can store ");
Serial.print(drive_mb);
Serial.print("MB , ");
Serial.print(drive_kb);
Serial.println("KB");
drive_mb = drive_gb;
real_drive_mb = drive_mb * 1000;
real_drive_kb = real_drive_mb * 1000;
Serial.print("But it really only store ");
Serial.print(real_drive_mb);
Serial.print("MB , "); 
Serial.print(real_drive_kb);
Serial.println("KB");
missing_drive_kb = drive_kb - real_drive_kb;
Serial.print("You are missing ");
Serial.print(missing_drive_kb);
}

//********** Loop *****************************************************************
void loop()
{
}
