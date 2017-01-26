/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKCompatibilityDelegate.h>

@class NSString;

@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nestedDocumentFilename;
-(Class)exporterClassForType:(id)arg1 options:(id)arg2 ;
-(BOOL)isSageDocumentType:(id)arg1 ;
-(Class)importerClassForType:(id)arg1 ;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(BOOL)isTCMessageExceptionErrorDomain:(id)arg1 ;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;
-(id)backwardsCompatibleTypeForType:(id)arg1 ;
-(id)newExportableDocumentTypesForFlag:(unsigned long long)arg1 ;
-(id)epubExportCategories;
-(id)epubExportLanguageCodes;
-(BOOL)isExportSupportedForType:(id)arg1 documentRoot:(id)arg2 ;
-(id)unsupportedExportMessageStringForType:(id)arg1 ;
@end

