/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:02 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPickerView.h>
#import <UIKit/UIWebFormControl.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol UIWebSelectedItemPrivate;
@class DOMHTMLSelectElement, NSArray, NSString;

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {

	DOMHTMLSelectElement* _selectionNode;
	NSArray* _cachedItems;
	id<UIWebSelectedItemPrivate> _singleSelectionItem;
	unsigned long long _singleSelectionIndex;
	double _fontSize;
	double _maximumTextWidth;
	long long _textAlignment;
	double _layoutWidth;

}

@property (nonatomic,retain) DOMHTMLSelectElement * _selectionNode;                          //@synthesize selectionNode=_selectionNode - In the implementation block
@property (nonatomic,retain) NSArray * _cachedItems;                                         //@synthesize cachedItems=_cachedItems - In the implementation block
@property (nonatomic,retain) id<UIWebSelectedItemPrivate> _singleSelectionItem;              //@synthesize singleSelectionItem=_singleSelectionItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(BOOL)arg4 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(void)layoutSubviews;
-(id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)set_selectionNode:(DOMHTMLSelectElement *)arg1 ;
-(void)set_cachedItems:(NSArray *)arg1 ;
-(void)set_singleSelectionItem:(id<UIWebSelectedItemPrivate>)arg1 ;
-(DOMHTMLSelectElement *)_selectionNode;
-(int)_itemIndexForRowIndex:(int)arg1 ;
-(id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(BOOL)arg5 ;
-(NSArray *)_cachedItems;
-(id<UIWebSelectedItemPrivate>)_singleSelectionItem;
@end

