/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:10:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libAccessibility.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXDefaultsObserverAction.h>

@class NSString;

@interface AXDefaultsObserverPostDarwinNotificationAction : NSObject <AXDefaultsObserverAction> {

	NSString* _note;

}

@property (nonatomic,copy) NSString * note;                         //@synthesize note=_note - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performForChangedDefault:(id)arg1 ;
-(id)initWithDarwinNotification:(id)arg1 ;
-(void)dealloc;
-(NSString *)note;
-(void)setNote:(NSString *)arg1 ;
@end

