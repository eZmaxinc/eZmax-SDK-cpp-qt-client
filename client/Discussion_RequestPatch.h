/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Discussion_RequestPatch.h
 *
 * A Discussion Object
 */

#ifndef Discussion_RequestPatch_H
#define Discussion_RequestPatch_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Discussion_RequestPatch : public Object {
public:
    Discussion_RequestPatch();
    Discussion_RequestPatch(QString json);
    ~Discussion_RequestPatch() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSDiscussionDescription() const;
    void setSDiscussionDescription(const QString &s_discussion_description);
    bool is_s_discussion_description_Set() const;
    bool is_s_discussion_description_Valid() const;

    bool isBDiscussionClosed() const;
    void setBDiscussionClosed(const bool &b_discussion_closed);
    bool is_b_discussion_closed_Set() const;
    bool is_b_discussion_closed_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_discussion_description;
    bool m_s_discussion_description_isSet;
    bool m_s_discussion_description_isValid;

    bool m_b_discussion_closed;
    bool m_b_discussion_closed_isSet;
    bool m_b_discussion_closed_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Discussion_RequestPatch)

#endif // Discussion_RequestPatch_H
