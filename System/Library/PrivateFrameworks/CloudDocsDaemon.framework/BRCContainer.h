/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, PQLConnection, NSMutableDictionary;


@protocol BRCContainer
@property (assign,nonatomic) BOOL needsSave; 
@property (nonatomic,retain) NSNumber * dbRowID; 
@property (nonatomic,readonly) BOOL isSharedContainer; 
@property (nonatomic,readonly) BOOL isPrivateContainer; 
@property (nonatomic,readonly) PQLConnection * db; 
@property (nonatomic,readonly) NSMutableDictionary * plist; 
@required
-(BOOL)needsSave;
-(void)setNeedsSave:(BOOL)arg1;
-(BOOL)isPrivateContainer;
-(BOOL)isSharedContainer;
-(NSNumber *)dbRowID;
-(NSMutableDictionary *)plist;
-(void)setDbRowID:(id)arg1;
-(BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2;
-(BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2;
-(PQLConnection *)db;

@end
