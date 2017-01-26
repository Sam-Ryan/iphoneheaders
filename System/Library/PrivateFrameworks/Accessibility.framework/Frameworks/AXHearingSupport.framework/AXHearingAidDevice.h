/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <libobjc.A.dylib/CBPeripheralDelegate.h>
#import <AXHearingSupport/AXHADeviceProtocol.h>

@class AXHATimer, NSMutableDictionary, NSString, NSMutableArray, NSArray, AXHearingAidMode, CBPeripheral, NSDate;

@interface AXHearingAidDevice : NSObject <CBPeripheralDelegate, AXHADeviceProtocol> {

	double _leftVolume;
	double _rightVolume;
	double _leftMicrophoneVolume;
	double _rightMicrophoneVolume;
	double _leftStreamVolume;
	double _rightStreamVolume;
	BOOL _keepInSync;
	BOOL _finishedLoading;
	long long initialLoadToken;
	AXHATimer* _propertyWriteTimer;
	BOOL _isListeningForStreamingChanges;
	OpaqueIOPSPowerSourceIDRef _leftPowerSouceID;
	OpaqueIOPSPowerSourceIDRef _rightPowerSourceID;
	NSMutableDictionary* _leftPowerSouceDictionary;
	NSMutableDictionary* _rightPowerSourceDictionary;
	BOOL isPaired;
	BOOL isConnecting;
	BOOL isPersistent;
	BOOL _supportsBinauralStreaming;
	BOOL _supportsCombinedPresets;
	BOOL _supportsCombinedVolumes;
	short _leftMicrophoneVolumeSteps;
	short _rightMicrophoneVolumeSteps;
	short _leftStreamVolumeSteps;
	short _rightStreamVolumeSteps;
	short _leftSensitivitySteps;
	short _rightSensitivitySteps;
	int _availableEars;
	unsigned _leftPresetBitmask;
	unsigned _rightPresetBitmask;
	NSString* leftUUID;
	NSString* rightUUID;
	NSString* name;
	NSMutableArray* manufacturer;
	NSMutableArray* model;
	NSString* leftFirmwareVersion;
	NSString* rightFirmwareVersion;
	NSString* leftHardwareVersion;
	NSString* rightHardwareVersion;
	double rightBatteryLevel;
	double leftBatteryLevel;
	NSArray* rightPrograms;
	NSArray* leftPrograms;
	AXHearingAidMode* currentRightProgram;
	AXHearingAidMode* currentLeftProgram;
	AXHearingAidMode* currentLeftStreamingProgram;
	AXHearingAidMode* currentRightStreamingProgram;
	CBPeripheral* leftPeripheral;
	CBPeripheral* rightPeripheral;
	AXHearingAidMode* _leftSelectedProgram;
	AXHearingAidMode* _rightSelectedProgram;
	AXHearingAidMode* _leftSelectedStreamingProgram;
	AXHearingAidMode* _rightSelectedStreamingProgram;
	double _leftSensitivity;
	double _rightSensitivity;
	unsigned long long leftLoadedProperties;
	unsigned long long rightLoadedProperties;
	NSMutableDictionary* leftPropertiesLoadCount;
	NSMutableDictionary* rightPropertiesLoadCount;
	NSString* leftPeripheralUUID;
	NSString* rightPeripheralUUID;
	unsigned long long leftWriteRequestProperties;
	unsigned long long rightWriteRequestProperties;
	long long leftProgramVersion;
	long long rightProgramVersion;
	unsigned long long _leftWriteResponseProperties;
	unsigned long long _rightWriteResponseProperties;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;

}

@property (assign,nonatomic) BOOL isPaired; 
@property (assign,nonatomic) BOOL keepInSync;                                               //@synthesize keepInSync=_keepInSync - In the implementation block
@property (assign,nonatomic) BOOL isPersistent; 
@property (assign,nonatomic) double rightMicrophoneVolume;                                  //@synthesize rightMicrophoneVolume=_rightMicrophoneVolume - In the implementation block
@property (assign,nonatomic) double leftMicrophoneVolume;                                   //@synthesize leftMicrophoneVolume=_leftMicrophoneVolume - In the implementation block
@property (assign,nonatomic) double rightStreamVolume;                                      //@synthesize rightStreamVolume=_rightStreamVolume - In the implementation block
@property (assign,nonatomic) double leftStreamVolume;                                       //@synthesize leftStreamVolume=_leftStreamVolume - In the implementation block
@property (nonatomic,retain) CBPeripheral * leftPeripheral; 
@property (nonatomic,retain) CBPeripheral * rightPeripheral; 
@property (nonatomic,retain) AXHearingAidMode * leftSelectedProgram;                        //@synthesize leftSelectedProgram=_leftSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedProgram;                       //@synthesize rightSelectedProgram=_rightSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedStreamingProgram;               //@synthesize leftSelectedStreamingProgram=_leftSelectedStreamingProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedStreamingProgram;              //@synthesize rightSelectedStreamingProgram=_rightSelectedStreamingProgram - In the implementation block
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSMutableArray * manufacturer; 
@property (nonatomic,retain) NSMutableArray * model; 
@property (nonatomic,retain) NSString * leftFirmwareVersion; 
@property (nonatomic,retain) NSString * rightFirmwareVersion; 
@property (nonatomic,retain) NSString * leftHardwareVersion; 
@property (nonatomic,retain) NSString * rightHardwareVersion; 
@property (nonatomic,retain) NSString * leftUUID; 
@property (nonatomic,retain) NSString * rightUUID; 
@property (nonatomic,retain) NSString * leftPeripheralUUID; 
@property (nonatomic,retain) NSString * rightPeripheralUUID; 
@property (assign,nonatomic) double rightBatteryLevel; 
@property (assign,nonatomic) double leftBatteryLevel; 
@property (nonatomic,copy) NSArray * rightPrograms; 
@property (nonatomic,copy) NSArray * leftPrograms; 
@property (assign,nonatomic) short leftMicrophoneVolumeSteps;                               //@synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightMicrophoneVolumeSteps;                              //@synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short leftStreamVolumeSteps;                                   //@synthesize leftStreamVolumeSteps=_leftStreamVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightStreamVolumeSteps;                                  //@synthesize rightStreamVolumeSteps=_rightStreamVolumeSteps - In the implementation block
@property (assign,nonatomic) short leftSensitivitySteps;                                    //@synthesize leftSensitivitySteps=_leftSensitivitySteps - In the implementation block
@property (assign,nonatomic) short rightSensitivitySteps;                                   //@synthesize rightSensitivitySteps=_rightSensitivitySteps - In the implementation block
@property (assign,nonatomic) BOOL supportsBinauralStreaming;                                //@synthesize supportsBinauralStreaming=_supportsBinauralStreaming - In the implementation block
@property (assign,nonatomic) BOOL supportsCombinedPresets;                                  //@synthesize supportsCombinedPresets=_supportsCombinedPresets - In the implementation block
@property (assign,nonatomic) BOOL supportsCombinedVolumes;                                  //@synthesize supportsCombinedVolumes=_supportsCombinedVolumes - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * currentRightStreamingProgram; 
@property (nonatomic,retain) AXHearingAidMode * currentLeftStreamingProgram; 
@property (nonatomic,retain) AXHearingAidMode * currentRightProgram; 
@property (nonatomic,retain) AXHearingAidMode * currentLeftProgram; 
@property (assign,nonatomic) BOOL isConnecting; 
@property (assign,nonatomic) unsigned long long leftLoadedProperties; 
@property (assign,nonatomic) unsigned long long rightLoadedProperties; 
@property (assign,nonatomic) unsigned long long leftWriteRequestProperties; 
@property (assign,nonatomic) unsigned long long rightWriteRequestProperties; 
@property (assign,nonatomic) unsigned long long leftWriteResponseProperties;                //@synthesize leftWriteResponseProperties=_leftWriteResponseProperties - In the implementation block
@property (assign,nonatomic) unsigned long long rightWriteResponseProperties;               //@synthesize rightWriteResponseProperties=_rightWriteResponseProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * leftPropertiesLoadCount; 
@property (nonatomic,retain) NSMutableDictionary * rightPropertiesLoadCount; 
@property (assign,nonatomic) long long leftProgramVersion; 
@property (assign,nonatomic) long long rightProgramVersion; 
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                                   //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                                  //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
@property (assign,nonatomic) unsigned leftPresetBitmask;                                    //@synthesize leftPresetBitmask=_leftPresetBitmask - In the implementation block
@property (assign,nonatomic) unsigned rightPresetBitmask;                                   //@synthesize rightPresetBitmask=_rightPresetBitmask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int availableEars;                                             //@synthesize availableEars=_availableEars - In the implementation block
@property (assign,nonatomic) double rightSensitivity;                                       //@synthesize rightSensitivity=_rightSensitivity - In the implementation block
@property (assign,nonatomic) double leftSensitivity;                                        //@synthesize leftSensitivity=_leftSensitivity - In the implementation block
@property (nonatomic,retain,readonly) NSString * deviceUUID; 
+(id)characteristicsUUIDs;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)_init;
-(NSMutableArray *)model;
-(void)connect;
-(BOOL)isPersistent;
-(id)valueForProperty:(unsigned long long)arg1 ;
-(void)setModel:(NSMutableArray *)arg1 ;
-(void)setManufacturer:(NSMutableArray *)arg1 ;
-(NSMutableArray *)manufacturer;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2 ;
-(BOOL)isConnecting;
-(BOOL)leftAvailable;
-(BOOL)rightAvailable;
-(double)leftBatteryLevel;
-(double)rightBatteryLevel;
-(void)setLeftPrograms:(NSArray *)arg1 ;
-(void)setRightPrograms:(NSArray *)arg1 ;
-(void)setAvailableEars:(int)arg1 ;
-(void)setLeftPeripheralUUID:(NSString *)arg1 ;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(void)setRightPeripheralUUID:(NSString *)arg1 ;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setIsPaired:(BOOL)arg1 ;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(int)availableEars;
-(BOOL)supportsCombinedPresets;
-(NSArray *)leftPrograms;
-(NSArray *)rightPrograms;
-(void)setLeftSelectedStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedProgram:(AXHearingAidMode *)arg1 ;
-(void)setLeftSelectedProgram:(AXHearingAidMode *)arg1 ;
-(AXHearingAidMode *)leftSelectedProgram;
-(AXHearingAidMode *)leftSelectedStreamingProgram;
-(AXHearingAidMode *)rightSelectedProgram;
-(AXHearingAidMode *)rightSelectedStreamingProgram;
-(void)_writeAllProgramSelectionsToPeripheral;
-(id)programs;
-(BOOL)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftBatteryLevel:(double)arg1 ;
-(void)setRightBatteryLevel:(double)arg1 ;
-(void)setLeftBatteryLowDate:(NSDate *)arg1 ;
-(void)setRightBatteryLowDate:(NSDate *)arg1 ;
-(void)setLeftSensitivitySteps:(short)arg1 ;
-(void)setRightSensitivitySteps:(short)arg1 ;
-(void)setLeftMicrophoneVolumeSteps:(short)arg1 ;
-(void)setRightMicrophoneVolumeSteps:(short)arg1 ;
-(void)setLeftStreamVolumeSteps:(short)arg1 ;
-(void)setRightStreamVolumeSteps:(short)arg1 ;
-(void)setSupportsCombinedPresets:(BOOL)arg1 ;
-(void)setSupportsCombinedVolumes:(BOOL)arg1 ;
-(void)setSupportsBinauralStreaming:(BOOL)arg1 ;
-(double)leftMicrophoneVolume;
-(double)rightMicrophoneVolume;
-(double)leftStreamVolume;
-(double)rightStreamVolume;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(BOOL)isBluetoothPaired;
-(short)leftSensitivitySteps;
-(short)rightSensitivitySteps;
-(short)leftMicrophoneVolumeSteps;
-(short)leftStreamVolumeSteps;
-(short)rightStreamVolumeSteps;
-(double)leftSensitivity;
-(double)rightSensitivity;
-(BOOL)supportsCombinedVolumes;
-(BOOL)supportsBinauralStreaming;
-(id)initWithPersistentRepresentation:(id)arg1 ;
-(void)disconnectAndUnpair:(BOOL)arg1 ;
-(BOOL)hasConnection;
-(BOOL)containsPeripheralWithUUID:(id)arg1 ;
-(BOOL)didLoadBasicProperties;
-(void)selectProgram:(id)arg1 ;
-(id)selectedPrograms;
-(id)selectedProgramIndexes;
-(BOOL)keepInSync;
-(void)setKeepInSync:(BOOL)arg1 ;
-(NSString *)leftPeripheralUUID;
-(NSString *)rightPeripheralUUID;
-(void)setRightMicrophoneVolume:(double)arg1 ;
-(void)setLeftMicrophoneVolume:(double)arg1 ;
-(void)setRightStreamVolume:(double)arg1 ;
-(void)setLeftStreamVolume:(double)arg1 ;
-(void)setRightSensitivity:(double)arg1 ;
-(void)setLeftSensitivity:(double)arg1 ;
-(short)rightMicrophoneVolumeSteps;
-(void)setIsConnecting:(BOOL)arg1 ;
-(void)setLeftPropertiesLoadCount:(NSMutableDictionary *)arg1 ;
-(void)setRightPropertiesLoadCount:(NSMutableDictionary *)arg1 ;
-(void)setCurrentLeftProgram:(AXHearingAidMode *)arg1 ;
-(void)setCurrentRightProgram:(AXHearingAidMode *)arg1 ;
-(void)setCurrentLeftStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setCurrentRightStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setLeftPeripheral:(CBPeripheral *)arg1 ;
-(void)updateName;
-(void)peripheral:(id)arg1 didUpdateCharacteristic:(id)arg2 ;
-(void)setIsPersistent:(BOOL)arg1 ;
-(CBPeripheral *)leftPeripheral;
-(AXHearingAidMode *)currentLeftProgram;
-(unsigned long long)leftLoadedProperties;
-(void)setLeftLoadedProperties:(unsigned long long)arg1 ;
-(void)setRightPeripheral:(CBPeripheral *)arg1 ;
-(CBPeripheral *)rightPeripheral;
-(AXHearingAidMode *)currentRightProgram;
-(unsigned long long)rightLoadedProperties;
-(void)setRightLoadedProperties:(unsigned long long)arg1 ;
-(AXHearingAidMode *)currentRightStreamingProgram;
-(AXHearingAidMode *)currentLeftStreamingProgram;
-(NSMutableDictionary *)rightPropertiesLoadCount;
-(NSMutableDictionary *)leftPropertiesLoadCount;
-(id)persistentRepresentation;
-(void)setNotify:(BOOL)arg1 forPeripheral:(id)arg2 ;
-(void)loadProperties:(unsigned long long)arg1 forPeripheral:(id)arg2 withRetryPeriod:(double)arg3 ;
-(void)loadBasicProperties;
-(BOOL)peripheral:(id)arg1 didLoadProperty:(unsigned long long)arg2 ;
-(unsigned long long)peripheral:(id)arg1 propertyForCharacteristic:(id)arg2 ;
-(void)loadFailedProperties;
-(void)readValueForCharacteristic:(id)arg1 fromPeripheral:(id)arg2 ;
-(id)peripheral:(id)arg1 characteristicForProperty:(unsigned long long)arg2 ;
-(unsigned char)volumeValueForProperty:(unsigned long long)arg1 andPeripheral:(id)arg2 ;
-(void)writeInt:(unsigned char)arg1 toPeripheral:(id)arg2 forProperty:(unsigned long long)arg3 ;
-(void)_sendDelayedWrites;
-(unsigned long long)leftWriteResponseProperties;
-(void)setLeftWriteResponseProperties:(unsigned long long)arg1 ;
-(unsigned long long)rightWriteResponseProperties;
-(void)setRightWriteResponseProperties:(unsigned long long)arg1 ;
-(void)delayWriteProperty:(unsigned long long)arg1 forPeripheral:(id)arg2 ;
-(BOOL)deviceSupportsProperty:(unsigned long long)arg1 ;
-(void)updateBatteryServiceForPeripheral:(id)arg1 ;
-(void)mateWithDevice:(id)arg1 ;
-(unsigned)rightPresetBitmask;
-(unsigned)leftPresetBitmask;
-(void)setRightPresetBitmask:(unsigned)arg1 ;
-(void)readProperty:(unsigned long long)arg1 fromPeripheral:(id)arg2 ;
-(void)setLeftPresetBitmask:(unsigned)arg1 ;
-(long long)rightProgramVersion;
-(long long)leftProgramVersion;
-(id)peripheral:(id)arg1 characteristicForUUID:(id)arg2 ;
-(void)pairingDidCompleteForPeripheral:(id)arg1 ;
-(id)initWithPeripheral:(id)arg1 ;
-(id)initWithLeftDevice:(id)arg1 andRightDevice:(id)arg2 ;
-(void)connectionDidChange;
-(BOOL)didLoadPersistentProperties;
-(int)connectedEars;
-(void)peripheral:(id)arg1 didInvalidateServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didFinishPairingWithResult:(id)arg2 ;
-(void)peripheralDidUnpair:(id)arg1 ;
-(BOOL)addPeripheral:(id)arg1 ;
-(unsigned long long)leftWriteRequestProperties;
-(void)setLeftWriteRequestProperties:(unsigned long long)arg1 ;
-(unsigned long long)rightWriteRequestProperties;
-(void)setRightWriteRequestProperties:(unsigned long long)arg1 ;
-(void)setLeftProgramVersion:(long long)arg1 ;
-(void)setRightProgramVersion:(long long)arg1 ;
-(id)deviceDescription;
-(BOOL)isConnected;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(NSString *)deviceUUID;
-(void)peripheralDidUpdateName:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(BOOL)isPaired;
@end

