#pragma once

#include <QtWidgets>
#include <ddialog.h>

#include <dlineedit.h>
#include <dimagebutton.h>

DWIDGET_USE_NAMESPACE

namespace dmr {
class LineEdit;

class UrlDialog: public DDialog {
public:
    UrlDialog();
    QUrl url() const;

protected:
    void showEvent(QShowEvent* se) override;

private:
    LineEdit *_le {nullptr};
};
}
