CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp
OBJECTS=$(SOURCES:.cpp=.o)


# Mono preriqs ls | grep .cs 
CSFILES=AddressLookupCollection.cs AddressLookupHelper.cs AFRMaps.cs AFRMeasurementCollection.cs AFRMeasurement.cs AppSettings.cs CombiAdapterMonitor.cs Engine.cs frmLogFilters.cs frmLogFilters.Designer.cs frmTuningSettings.cs frmTuningSettings.Designer.cs FTDIAdapterMonitor.cs FuelMap.cs FuelMapInformation.cs HWID.cs IECUFile.cs IECUFileInformation.cs IECUProperties.cs IgnitionMaps.cs IgnitionMeasurementCollection.cs IgnitionMeasurement.cs KnockMapInfoCollection.cs KnockMapInfo.cs LogFilterCollection.cs LogFilter.cs LogFilters.cs PartnumberCollection.cs PartNumberConverter.cs PressureToTorque.cs ProgramModeSettings.cs SortableCollectionBase.cs SymbolAxesTranslator.cs SymbolCollection.cs SymbolHelper.cs SymbolTranslator.cs TransactionCollection.cs TransactionEntry.cs Trionic5Anomalies.cs Trionic5Bootloader.cs Trionic5File.cs Trionic5FileInformation.cs Trionic5Immo.cs Trionic5Properties.cs Trionic5Resume.cs Trionic5SymbolConverter.cs Trionic5SymbolInformation.cs Trionic5Tools.csproj Trionic5Tuner.cs TrionicProjectLog.cs TrionicTransactionLog.cs TuningReferenceMaps.cs VINDecoder.cs XDFWriter.cs

# Mono compile and linker flags
CFLAGS+=`pkg-config --cflags mono-2`
LDFLAGS+=`pkg-config --libs mono-2`

all: t5monolib main

# Build monolib if csfiles have changed
t5monolib: $(CSFILES) 
	xbuild


# Build main
main: $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

# Build o files
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@


clean:
	rm *.o *.a main
	rm bin/Debug/*.dll
    #TODO release
