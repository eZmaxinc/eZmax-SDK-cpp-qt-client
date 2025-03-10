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
 * Common_Response_Redirect_sSecretquestionTextX.h
 *
 * 352 Redirect Message containing secret question
 */

#ifndef Common_Response_Redirect_sSecretquestionTextX_H
#define Common_Response_Redirect_sSecretquestionTextX_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Common_Response_Redirect_sSecretquestionTextX : public Object {
public:
    Common_Response_Redirect_sSecretquestionTextX();
    Common_Response_Redirect_sSecretquestionTextX(QString json);
    ~Common_Response_Redirect_sSecretquestionTextX() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSSecretquestionTextX() const;
    void setSSecretquestionTextX(const QString &s_secretquestion_text_x);
    bool is_s_secretquestion_text_x_Set() const;
    bool is_s_secretquestion_text_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_secretquestion_text_x;
    bool m_s_secretquestion_text_x_isSet;
    bool m_s_secretquestion_text_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Response_Redirect_sSecretquestionTextX)

#endif // Common_Response_Redirect_sSecretquestionTextX_H
