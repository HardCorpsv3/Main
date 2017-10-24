@echo off
color 0a
title ArmA 3 Server Monitor!
start E:\Arma3Server\DB\redis-server.exe
:Serverstart
echo Launching Server
E:
cd "E:\Arma3Server"
echo ArmA 3 Server Monitor... Active !
start "Arma3" /min /wait arma3server.exe -mod=@EpochExperimental;@CBA_A3;@ace;@CUPACE3compatVehicles;@CUPACE3compatWeapons;@CUPTerrainsCore;@CUPTerrainsMaps;@CUPVehicles;@CUPUnits;@CUPWeapons;@ChernarusRedux;@DSHouses;@RDSCivilianPack;@ZombiesandDemons;@TRYK;@EnhancedMovement; -Servermod=@epochhive; -port=2302 -profiles=sc -config=E:\Arma3Server\sc\server.cfg -cfg=E:\Arma3Server\sc\basic.cfg -name=sc -autoinit
ping 127.0.0.1 -n 15 >NUL
echo ArmA 3 Server Shutdown ... Restarting!
ping 127.0.0.1 5 >NUL
cls
goto Serverstart