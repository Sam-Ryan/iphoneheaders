/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:01:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardParsedResultBuilder <NSObject>
@required
-(id)valueForProperty:(id)arg1;
-(id)build;
-(BOOL)canSetValueForProperty:(id)arg1;
-(BOOL)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
-(BOOL)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
-(void)setUnknownProperties:(id)arg1;
-(id)validCountryCodes;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2;

@end

