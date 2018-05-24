//
//  VJDocument.h
//  VisualJSON
//
//  Created by 2012 youknowone.org on 12. 6. 4..
//  Copyright (c) 2012 youknowone.org. All rights reserved.
//

@class VJTabController;
@class VJRequest;

@class VJDocument;

@protocol VJDocumentDelegate <NSObject>

- (BOOL)document:(VJDocument *)document dataIsValid:(NSString *)rawData;

- (id)document:(VJDocument *)document structuredDataFromRawDataString:(NSString *)rawData;
- (NSString *)document:(VJDocument *)document prettyTextFromData:(id)data;

- (NSUInteger)document:(VJDocument *)document outlineChildrenCountForItem:(id)item;
- (BOOL)document:(VJDocument *)document outlineIsItemExpandable:(id)item;
- (NSString *)document:(VJDocument *)document outlineTitleForItem:(id)item;
- (NSString *)document:(VJDocument *)document outlineDescriptionForItem:(id)item;
- (id)document:(VJDocument *)document outlineChild:(NSInteger)index ofItem:(id)item;

@end



@interface VJDocument : NSPersistentDocument<NSTextViewDelegate, NSMatrixDelegate, NSComboBoxDelegate, NSComboBoxDataSource> {
    id<VJDocumentDelegate> _delegate;

    NSString *_header;
    NSString *_method;
    NSString *_querydata;
    
    NSMutableArray *_headerItems;
    NSMutableArray *_querydataItems;
    
    NSComboBox *_addressComboBox;
    NSMatrix *_methodMatrix;
    NSTextField *_methodTextField;
    NSTextField *_querydataTextField;
    NSTextView *_contentTextView;
    NSOutlineView *_dataOutlineView;
    NSTextView *_dataTextView;
    
    NSDrawer *_drawer;
    NSTableView *_querydataTableView;
    NSTextView *_querydataTextView;
    NSTableView *_headerTableView;
    NSTextField *_headerTextField;
    
    NSProgressIndicator *_circularProgressIndicator;
    
    id _data;
    
    VJRequest *_request;
    
    id tempContent;
    NSThread *refreshThread;
    id tempData;
    NSThread *visualizeThread;
}

@property(retain) id delegate;

@property(retain) NSString *address;
@property(retain) NSString *header;
@property(retain) NSString *method;
@property(retain) NSString *querydata;
@property(retain) NSString *content;

@property(readonly) NSMutableArray *headerItems;
@property(readonly) NSMutableArray *querydataItems;

@property(assign) IBOutlet NSComboBox *addressComboBox;
@property(assign) IBOutlet NSMatrix *methodMatrix;
@property(assign) IBOutlet NSTextField *methodTextField;
@property(assign) IBOutlet NSTextField *querydataTextField;
@property(assign) IBOutlet NSTextView *contentTextView;
@property(assign) IBOutlet NSTextField *headerTextField;
@property(assign) IBOutlet NSOutlineView *dataOutlineView;
@property(assign) IBOutlet NSTextView *dataTextView;

@property(assign) IBOutlet NSDrawer *drawer;
@property(assign) IBOutlet NSTableView *querydataTableView;
@property(assign) IBOutlet NSTextView *querydataTextView;
@property(assign) IBOutlet NSTableView *headerTableView;

@property(assign) IBOutlet NSProgressIndicator *circularProgressIndicator;

@property(retain) id data;
@property(retain) VJRequest *request;

- (IBAction)setDefaultHeader:(id)sender;

- (IBAction)addressComboBoxChanged:(id)sender;
- (IBAction)methodMatrixChanged:(id)sender;
- (IBAction)methodTextFieldChanged:(id)sender;
- (IBAction)querydataTextFieldChanged:(id)sender;
- (IBAction)headerTextFieldChanged:(id)sender;

- (IBAction)refresh:(id)sender;
- (void)refreshBackground;
- (void)refreshFinished;
- (IBAction)visualize:(id)sender;
- (void)visualizeBackground;
- (void)visualizeFinished;

- (IBAction)toggleDrawer:(id)sender;

- (IBAction)openWebsite:(id)sender;

@end

@interface VJHeaderTableViewController : NSObject<NSTableViewDataSource, NSTableViewDelegate> {
    IBOutlet VJDocument *document;
    
    IBOutlet NSTableView *tableView;
}

- (IBAction)addRow:(id)sender;
- (IBAction)removeRow:(id)sender;

@end

@interface VJQuerydataTableViewController : NSObject<NSTableViewDataSource, NSTableViewDelegate, NSTextViewDelegate> {
    IBOutlet VJDocument *document;
    
    IBOutlet NSTableView *tableView;
    IBOutlet NSTextView *textView;
}

- (IBAction)addRow:(id)sender;
- (IBAction)removeRow:(id)sender;

@end
