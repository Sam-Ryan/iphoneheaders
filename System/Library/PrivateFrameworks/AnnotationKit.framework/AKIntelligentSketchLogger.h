/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:37:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AKIntelligentSketchLogger : NSObject
+(id)sharedInstance;
+(void)initialize;
-(BOOL)_loggingIsEnabled;
-(id)_newLogPathWithShapeName:(id)arg1 ;
-(id)_logsPath;
-(id)_fileName:(id)arg1 ;
-(void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2 ;
-(void)openFinderWindowToLogs;
@end

