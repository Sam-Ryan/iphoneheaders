/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {

	NSMutableSet* _supportedReports;

}

@property (nonatomic,retain) NSMutableSet * supportedReports;              //@synthesize supportedReports=_supportedReports - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableSet *)supportedReports;
-(void)addSupportedReport:(id)arg1 ;
-(void)setSupportedReports:(NSMutableSet *)arg1 ;
-(BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2 ;
@end

