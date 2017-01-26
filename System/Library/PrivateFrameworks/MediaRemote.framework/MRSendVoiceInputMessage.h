/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@class MRAudioDataBlock, MRAudioBuffer;

@interface MRSendVoiceInputMessage : MRProtocolMessage {

	MRAudioDataBlock* _dataBlock;

}

@property (nonatomic,readonly) MRAudioBuffer * buffer; 
@property (nonatomic,readonly) SCD_Struct_MR13 time; 
@property (nonatomic,readonly) float gain; 
-(void)dealloc;
-(unsigned long long)type;
-(unsigned long long)priority;
-(SCD_Struct_MR13)time;
-(float)gain;
-(void)_initializeDataIfNecessary;
-(id)initWithBuffer:(id)arg1 time:(SCD_Struct_MR13)arg2 gain:(float)arg3 ;
-(MRAudioBuffer *)buffer;
@end

