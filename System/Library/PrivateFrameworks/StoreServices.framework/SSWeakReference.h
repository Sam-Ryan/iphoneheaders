/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:11:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSWeakReference : NSObject {

	id _object;
	unsigned long long _objectAddress;

}

@property (nonatomic,readonly) id object; 
+(id)weakReferenceWithObject:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)object;
@end

