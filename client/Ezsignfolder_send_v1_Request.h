/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfolder_send_v1_Request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/send
 */

#ifndef Ezsignfolder_send_v1_Request_H
#define Ezsignfolder_send_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfolder_send_v1_Request : public Object {
public:
    Ezsignfolder_send_v1_Request();
    Ezsignfolder_send_v1_Request(QString json);
    ~Ezsignfolder_send_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTExtraMessage() const;
    void setTExtraMessage(const QString &t_extra_message);
    bool is_t_extra_message_Set() const;
    bool is_t_extra_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_t_extra_message;
    bool m_t_extra_message_isSet;
    bool m_t_extra_message_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_send_v1_Request)

#endif // Ezsignfolder_send_v1_Request_H
