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
 * Discussionmessage_RequestPatch.h
 *
 * A Discussionmessage Object
 */

#ifndef Discussionmessage_RequestPatch_H
#define Discussionmessage_RequestPatch_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Discussionmessage_RequestPatch : public Object {
public:
    Discussionmessage_RequestPatch();
    Discussionmessage_RequestPatch(QString json);
    ~Discussionmessage_RequestPatch() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiDiscussionmembershipIdActionrequired() const;
    void setFkiDiscussionmembershipIdActionrequired(const qint32 &fki_discussionmembership_id_actionrequired);
    bool is_fki_discussionmembership_id_actionrequired_Set() const;
    bool is_fki_discussionmembership_id_actionrequired_Valid() const;

    QString getTDiscussionmessageContent() const;
    void setTDiscussionmessageContent(const QString &t_discussionmessage_content);
    bool is_t_discussionmessage_content_Set() const;
    bool is_t_discussionmessage_content_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_discussionmembership_id_actionrequired;
    bool m_fki_discussionmembership_id_actionrequired_isSet;
    bool m_fki_discussionmembership_id_actionrequired_isValid;

    QString m_t_discussionmessage_content;
    bool m_t_discussionmessage_content_isSet;
    bool m_t_discussionmessage_content_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Discussionmessage_RequestPatch)

#endif // Discussionmessage_RequestPatch_H
