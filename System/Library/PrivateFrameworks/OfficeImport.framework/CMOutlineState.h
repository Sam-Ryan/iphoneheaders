/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMOutlineState : NSObject {

	unsigned long long counter[10];
	unsigned long long listId;

}
-(id)init;
-(void)reset;
-(unsigned long long)counterAtLevel:(unsigned char)arg1 ;
-(void)increaseCounterAtLevel:(unsigned char)arg1 ;
-(unsigned long long)listId;
-(id)initWithListId:(unsigned long long)arg1 ;
-(void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2 ;
@end
