/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject;

@interface TCMessageContext : NSObject {

	NSMutableSet* m_warnings;
	NSMutableSet* m_errors;
	NSMutableArray* m_currentObjectStack;
	NSMutableDictionary* m_placeholderToObjectMap;
	NSObject*<OS_dispatch_queue> mMessageSyncQueue;

}
+(void)initialize;
+(void)reportObjectOrPlaceholder:(id)arg1 withWarning:(TCTaggedMessageStructure*)arg2 parameters:(char*)arg3 ;
+(id)currentObjectOrPlaceholder;
+(void)reportWarningsToDelegate;
+(void)popCurrentPlaceholder:(id)arg1 ;
+(void)popCurrentObject;
+(void)reportObject:(id)arg1 withWarning:(TCTaggedMessageStructure*)arg2 ;
+(void)reportWarning:(TCTaggedMessageStructure*)arg1 ;
+(void)reportError:(TCTaggedMessageStructure*)arg1 ;
+(void)reportWarningException:(id)arg1 ;
+(void)reportErrorException:(id)arg1 ;
+(void)createContextForCurrentThread;
+(void)removeContextForCurrentThread;
+(id)getWarningArray;
+(id)getErrorArray;
+(void)setIsFileStructuredStorage:(BOOL)arg1 ;
+(BOOL)isFileStructuredStorage;
+(void)pushCurrentObject:(id)arg1 ;
+(id)pushCurrentPlaceholder;
+(void)setObject:(id)arg1 forPlaceholder:(id)arg2 ;
+(void)replacePlaceholdersWithObjects;
+(unsigned long long)saveObjectStack;
+(void)restoreObjectStack:(unsigned)arg1 ;
-(id)currentObject;
-(void)addErrorMessageEntry:(id)arg1 ;
-(void)addWarningMessageEntry:(id)arg1 ;
-(void)pushObject:(id)arg1 ;
-(void)popObject;
-(id)pushPlaceholder;
-(void)popPlaceholder:(id)arg1 ;
-(void)setObject:(id)arg1 forPlaceholderKey:(id)arg2 dispatchSync:(BOOL)arg3 ;
-(void)replacePlaceholdersWithObjects:(BOOL)arg1 ;
-(void)reportWarningsToDelegate;
-(void)dealloc;
-(id)init;
-(void)reportWarningForObject:(id)arg1 warning:(TCTaggedMessageStructure*)arg2 parameterList:(char*)arg3 ;
@end
