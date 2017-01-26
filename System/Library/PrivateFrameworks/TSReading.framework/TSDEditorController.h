/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDEditor;
@class TSKDocumentRoot, NSMutableArray, NSObject, NSMutableDictionary;

@interface TSDEditorController : NSObject {

	TSKDocumentRoot* mDocumentRoot;
	NSMutableArray* mEditorStack;
	NSObject*<TSDEditor> mTextInputEditor;
	unsigned long long mTransactionLevel;
	BOOL mDidChangeTextInputEditor;
	BOOL mDidChangeCurrentEditors;
	BOOL mNotifiedWillChangeTextInputEditor;
	BOOL mNotifiedWillChangeCurrentEditors;
	BOOL mIsReentrantResigningTextInputEditors;
	NSMutableArray* mResignedTextInputEditors;
	NSMutableDictionary* mInspectorPropertyValueMap;
	unsigned long long mChangingCurrentEditorsWhenCommittingInspectorChangesCount;

}

@property (getter=isChangingCurrentEditorsWhenCommittingInspectorChanges,nonatomic,readonly) BOOL changingCurrentEditorsWhenCommittingInspectorChanges; 
-(id)editorForEditAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)currentEditors;
-(void)popEditor:(id)arg1 ;
-(id)initWithDocumentRoot:(id)arg1 ;
-(void)pushEditor:(id)arg1 ;
-(void)enumerateEditorsOnStackUsingBlock:(/*^block*/id)arg1 ;
-(void)setTextInputEditor:(id)arg1 ;
-(id)textInputEditor;
-(id)mostSpecificCurrentEditorOfClass:(Class)arg1 ;
-(id)editorForEditAction:(SEL)arg1 withSender:(id)arg2 response:(int*)arg3 ;
-(void)popToEditor:(id)arg1 ;
-(void)p_setTextInputEditor:(id)arg1 ;
-(void)notifyResignedTextInputEditors;
-(void)p_willChangeCurrentEditorsWithNewEditors:(id)arg1 ;
-(void)p_didChangeCurrentEditors;
-(void)p_willChangeTextInputEditor;
-(void)p_didChangeTextInputEditor;
-(void)p_willChangeCurrentEditors;
-(id)mostSpecificCurrentEditorOfClass:(Class)arg1 conformingToProtocol:(id)arg2 ;
-(BOOL)anyEditorProhibitsAction:(SEL)arg1 ;
-(void)popEditor:(id)arg1 andPushTextInputEditor:(id)arg2 ;
-(id)currentEditorsOfClass:(Class)arg1 ;
-(id)currentEditorsConformingToProtocol:(id)arg1 ;
-(id)mostSpecificEditorConformingToProtocol:(id)arg1 ;
-(void)setObject:(id)arg1 forInspectorPropertyKey:(id)arg2 ;
-(void)removeObjectForInspectorPropertyKey:(id)arg1 ;
-(id)objectForInspectorPropertyKey:(id)arg1 ;
-(BOOL)isChangingCurrentEditorsWhenCommittingInspectorChanges;
-(void)willChangeCurrentEditorsWhenCommittingInspectorChanges;
-(void)didChangeCurrentEditorsWhenCommittingInspectorChanges;
-(void)editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned long long)arg2 ;
-(void)editorSelectionWasForciblyChanged:(id)arg1 ;
-(void)editorDidChangeSelectionAndWantsKeyboard:(id)arg1 withSelectionFlags:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)beginTransaction;
-(void)endTransaction;
-(void)teardown;
@end

