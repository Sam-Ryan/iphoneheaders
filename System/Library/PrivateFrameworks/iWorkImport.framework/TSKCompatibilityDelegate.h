/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:59 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKCompatibilityDelegate <NSObject>
@optional
-(id)backwardsCompatibleTypeForType:(id)arg1;
-(BOOL)isExportSupportedForType:(id)arg1 documentRoot:(id)arg2;
-(id)unsupportedExportMessageStringForType:(id)arg1;

@required
-(id)nestedDocumentFilename;
-(Class)exporterClassForType:(id)arg1 options:(id)arg2;
-(BOOL)isSageDocumentType:(id)arg1;
-(Class)importerClassForType:(id)arg1;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(BOOL)isTCMessageExceptionErrorDomain:(id)arg1;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;

@end

