/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying> {

	float _buttonA;
	float _buttonB;
	float _buttonPause;
	float _buttonX;
	float _buttonY;
	float _dpadX;
	float _dpadY;
	float _leftShoulder;
	float _leftThumbstickX;
	float _leftThumbstickY;
	float _leftTrigger;
	float _rightShoulder;
	float _rightThumbstickX;
	float _rightThumbstickY;
	float _rightTrigger;
	SCD_Struct_MR24 _has;

}

@property (assign,nonatomic) BOOL hasDpadX; 
@property (assign,nonatomic) float dpadX;                           //@synthesize dpadX=_dpadX - In the implementation block
@property (assign,nonatomic) BOOL hasDpadY; 
@property (assign,nonatomic) float dpadY;                           //@synthesize dpadY=_dpadY - In the implementation block
@property (assign,nonatomic) BOOL hasButtonA; 
@property (assign,nonatomic) float buttonA;                         //@synthesize buttonA=_buttonA - In the implementation block
@property (assign,nonatomic) BOOL hasButtonB; 
@property (assign,nonatomic) float buttonB;                         //@synthesize buttonB=_buttonB - In the implementation block
@property (assign,nonatomic) BOOL hasButtonX; 
@property (assign,nonatomic) float buttonX;                         //@synthesize buttonX=_buttonX - In the implementation block
@property (assign,nonatomic) BOOL hasButtonY; 
@property (assign,nonatomic) float buttonY;                         //@synthesize buttonY=_buttonY - In the implementation block
@property (assign,nonatomic) BOOL hasLeftShoulder; 
@property (assign,nonatomic) float leftShoulder;                    //@synthesize leftShoulder=_leftShoulder - In the implementation block
@property (assign,nonatomic) BOOL hasRightShoulder; 
@property (assign,nonatomic) float rightShoulder;                   //@synthesize rightShoulder=_rightShoulder - In the implementation block
@property (assign,nonatomic) BOOL hasLeftThumbstickX; 
@property (assign,nonatomic) float leftThumbstickX;                 //@synthesize leftThumbstickX=_leftThumbstickX - In the implementation block
@property (assign,nonatomic) BOOL hasLeftThumbstickY; 
@property (assign,nonatomic) float leftThumbstickY;                 //@synthesize leftThumbstickY=_leftThumbstickY - In the implementation block
@property (assign,nonatomic) BOOL hasRightThumbstickX; 
@property (assign,nonatomic) float rightThumbstickX;                //@synthesize rightThumbstickX=_rightThumbstickX - In the implementation block
@property (assign,nonatomic) BOOL hasRightThumbstickY; 
@property (assign,nonatomic) float rightThumbstickY;                //@synthesize rightThumbstickY=_rightThumbstickY - In the implementation block
@property (assign,nonatomic) BOOL hasLeftTrigger; 
@property (assign,nonatomic) float leftTrigger;                     //@synthesize leftTrigger=_leftTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasRightTrigger; 
@property (assign,nonatomic) float rightTrigger;                    //@synthesize rightTrigger=_rightTrigger - In the implementation block
@property (assign,nonatomic) BOOL hasButtonPause; 
@property (assign,nonatomic) float buttonPause;                     //@synthesize buttonPause=_buttonPause - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setButtonA:(float)arg1 ;
-(void)setButtonX:(float)arg1 ;
-(void)setButtonPause:(float)arg1 ;
-(void)setDpadX:(float)arg1 ;
-(void)setDpadY:(float)arg1 ;
-(void)setButtonB:(float)arg1 ;
-(void)setButtonY:(float)arg1 ;
-(void)setLeftShoulder:(float)arg1 ;
-(void)setRightShoulder:(float)arg1 ;
-(void)setLeftThumbstickX:(float)arg1 ;
-(void)setLeftThumbstickY:(float)arg1 ;
-(void)setRightThumbstickX:(float)arg1 ;
-(void)setRightThumbstickY:(float)arg1 ;
-(void)setLeftTrigger:(float)arg1 ;
-(void)setRightTrigger:(float)arg1 ;
-(BOOL)hasButtonA;
-(float)buttonA;
-(BOOL)hasButtonX;
-(float)buttonX;
-(BOOL)hasButtonPause;
-(float)buttonPause;
-(BOOL)hasDpadX;
-(float)dpadX;
-(BOOL)hasDpadY;
-(float)dpadY;
-(BOOL)hasButtonB;
-(float)buttonB;
-(BOOL)hasButtonY;
-(float)buttonY;
-(BOOL)hasLeftShoulder;
-(float)leftShoulder;
-(BOOL)hasRightShoulder;
-(float)rightShoulder;
-(BOOL)hasLeftThumbstickX;
-(float)leftThumbstickX;
-(BOOL)hasLeftThumbstickY;
-(float)leftThumbstickY;
-(BOOL)hasRightThumbstickX;
-(float)rightThumbstickX;
-(BOOL)hasRightThumbstickY;
-(float)rightThumbstickY;
-(BOOL)hasLeftTrigger;
-(float)leftTrigger;
-(BOOL)hasRightTrigger;
-(float)rightTrigger;
-(void)setHasDpadX:(BOOL)arg1 ;
-(void)setHasDpadY:(BOOL)arg1 ;
-(void)setHasButtonA:(BOOL)arg1 ;
-(void)setHasButtonB:(BOOL)arg1 ;
-(void)setHasButtonX:(BOOL)arg1 ;
-(void)setHasButtonY:(BOOL)arg1 ;
-(void)setHasLeftShoulder:(BOOL)arg1 ;
-(void)setHasRightShoulder:(BOOL)arg1 ;
-(void)setHasLeftThumbstickX:(BOOL)arg1 ;
-(void)setHasLeftThumbstickY:(BOOL)arg1 ;
-(void)setHasRightThumbstickX:(BOOL)arg1 ;
-(void)setHasRightThumbstickY:(BOOL)arg1 ;
-(void)setHasLeftTrigger:(BOOL)arg1 ;
-(void)setHasRightTrigger:(BOOL)arg1 ;
-(void)setHasButtonPause:(BOOL)arg1 ;
@end

