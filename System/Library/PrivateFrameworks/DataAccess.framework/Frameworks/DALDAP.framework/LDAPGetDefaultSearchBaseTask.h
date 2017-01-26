/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DALDAP/LDAPTask.h>

@class NSString;

@interface LDAPGetDefaultSearchBaseTask : LDAPTask {

	NSString* _defaultNamingContext;

}

@property (nonatomic,retain) NSString * defaultNamingContext;              //@synthesize defaultNamingContext=_defaultNamingContext - In the implementation block
-(void)performTask;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)_performQuery;
-(void)setDefaultNamingContext:(NSString *)arg1 ;
-(NSString *)defaultNamingContext;
-(int)numDownloadedElements;
-(void)finishWithError:(id)arg1 ;
@end
