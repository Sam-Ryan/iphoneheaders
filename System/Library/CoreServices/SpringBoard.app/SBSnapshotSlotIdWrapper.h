/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:24 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAContext;

@interface SBSnapshotSlotIdWrapper : NSObject {

	unsigned _slotId;
	CAContext* _context;

}

@property (nonatomic,readonly) unsigned slotId;                  //@synthesize slotId=_slotId - In the implementation block
@property (nonatomic,readonly) CAContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithContext:(id)arg1 slotId:(unsigned)arg2 ;
-(unsigned)slotId;
-(void)dealloc;
-(id)init;
-(CAContext *)context;
@end
