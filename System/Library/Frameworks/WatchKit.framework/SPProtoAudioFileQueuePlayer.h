/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:33 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoObjectMessage, SPProtoAudioFilePlayerUpdateContainedIdentifier, SPProtoAudioFileQueuePlayerSetRate, SPProtoAudioFilePlayerStatus, SPProtoAudioFileQueuePlayerSetItems;

@interface SPProtoAudioFileQueuePlayer : PBCodable <NSCopying> {

	SPProtoObjectMessage* _advanceToNextItem;
	SPProtoAudioFilePlayerUpdateContainedIdentifier* _appendItem;
	SPProtoObjectMessage* _destroy;
	SPProtoObjectMessage* _removeAllItems;
	SPProtoAudioFilePlayerUpdateContainedIdentifier* _removeItem;
	SPProtoAudioFilePlayerUpdateContainedIdentifier* _replaceCurrentItem;
	SPProtoAudioFilePlayerUpdateContainedIdentifier* _setCurrentItem;
	SPProtoAudioFileQueuePlayerSetRate* _setRate;
	SPProtoAudioFilePlayerStatus* _setStatus;
	SPProtoAudioFileQueuePlayerSetItems* _upsertWithItems;

}

@property (nonatomic,readonly) BOOL hasUpsertWithItems; 
@property (nonatomic,retain) SPProtoAudioFileQueuePlayerSetItems * upsertWithItems;                             //@synthesize upsertWithItems=_upsertWithItems - In the implementation block
@property (nonatomic,readonly) BOOL hasDestroy; 
@property (nonatomic,retain) SPProtoObjectMessage * destroy;                                                    //@synthesize destroy=_destroy - In the implementation block
@property (nonatomic,readonly) BOOL hasSetRate; 
@property (nonatomic,retain) SPProtoAudioFileQueuePlayerSetRate * setRate;                                      //@synthesize setRate=_setRate - In the implementation block
@property (nonatomic,readonly) BOOL hasReplaceCurrentItem; 
@property (nonatomic,retain) SPProtoAudioFilePlayerUpdateContainedIdentifier * replaceCurrentItem;              //@synthesize replaceCurrentItem=_replaceCurrentItem - In the implementation block
@property (nonatomic,readonly) BOOL hasSetStatus; 
@property (nonatomic,retain) SPProtoAudioFilePlayerStatus * setStatus;                                          //@synthesize setStatus=_setStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasAdvanceToNextItem; 
@property (nonatomic,retain) SPProtoObjectMessage * advanceToNextItem;                                          //@synthesize advanceToNextItem=_advanceToNextItem - In the implementation block
@property (nonatomic,readonly) BOOL hasAppendItem; 
@property (nonatomic,retain) SPProtoAudioFilePlayerUpdateContainedIdentifier * appendItem;                      //@synthesize appendItem=_appendItem - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoveItem; 
@property (nonatomic,retain) SPProtoAudioFilePlayerUpdateContainedIdentifier * removeItem;                      //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoveAllItems; 
@property (nonatomic,retain) SPProtoObjectMessage * removeAllItems;                                             //@synthesize removeAllItems=_removeAllItems - In the implementation block
@property (nonatomic,readonly) BOOL hasSetCurrentItem; 
@property (nonatomic,retain) SPProtoAudioFilePlayerUpdateContainedIdentifier * setCurrentItem;                  //@synthesize setCurrentItem=_setCurrentItem - In the implementation block
-(id)sockPuppetMessage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(SPProtoObjectMessage *)destroy;
-(SPProtoObjectMessage *)removeAllItems;
-(SPProtoObjectMessage *)advanceToNextItem;
-(void)setUpsertWithItems:(SPProtoAudioFileQueuePlayerSetItems *)arg1 ;
-(void)setDestroy:(SPProtoObjectMessage *)arg1 ;
-(void)setSetRate:(SPProtoAudioFileQueuePlayerSetRate *)arg1 ;
-(void)setReplaceCurrentItem:(SPProtoAudioFilePlayerUpdateContainedIdentifier *)arg1 ;
-(void)setSetStatus:(SPProtoAudioFilePlayerStatus *)arg1 ;
-(void)setAdvanceToNextItem:(SPProtoObjectMessage *)arg1 ;
-(void)setAppendItem:(SPProtoAudioFilePlayerUpdateContainedIdentifier *)arg1 ;
-(void)setRemoveItem:(SPProtoAudioFilePlayerUpdateContainedIdentifier *)arg1 ;
-(void)setRemoveAllItems:(SPProtoObjectMessage *)arg1 ;
-(void)setSetCurrentItem:(SPProtoAudioFilePlayerUpdateContainedIdentifier *)arg1 ;
-(BOOL)hasUpsertWithItems;
-(BOOL)hasDestroy;
-(BOOL)hasSetRate;
-(BOOL)hasReplaceCurrentItem;
-(BOOL)hasSetStatus;
-(BOOL)hasAdvanceToNextItem;
-(BOOL)hasAppendItem;
-(BOOL)hasRemoveItem;
-(BOOL)hasRemoveAllItems;
-(BOOL)hasSetCurrentItem;
-(SPProtoAudioFileQueuePlayerSetItems *)upsertWithItems;
-(SPProtoAudioFileQueuePlayerSetRate *)setRate;
-(SPProtoAudioFilePlayerUpdateContainedIdentifier *)replaceCurrentItem;
-(SPProtoAudioFilePlayerStatus *)setStatus;
-(SPProtoAudioFilePlayerUpdateContainedIdentifier *)appendItem;
-(SPProtoAudioFilePlayerUpdateContainedIdentifier *)removeItem;
-(SPProtoAudioFilePlayerUpdateContainedIdentifier *)setCurrentItem;
@end

