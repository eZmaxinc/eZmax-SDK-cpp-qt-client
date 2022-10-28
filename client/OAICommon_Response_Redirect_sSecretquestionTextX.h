/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Response_Redirect_sSecretquestionTextX.h
 *
 * 352 Redirect Message containing secret question
 */

#ifndef OAICommon_Response_Redirect_sSecretquestionTextX_H
#define OAICommon_Response_Redirect_sSecretquestionTextX_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Response_Redirect_sSecretquestionTextX : public OAIObject {
public:
    OAICommon_Response_Redirect_sSecretquestionTextX();
    OAICommon_Response_Redirect_sSecretquestionTextX(QString json);
    ~OAICommon_Response_Redirect_sSecretquestionTextX() override;

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

    QString s_secretquestion_text_x;
    bool m_s_secretquestion_text_x_isSet;
    bool m_s_secretquestion_text_x_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_Redirect_sSecretquestionTextX)

#endif // OAICommon_Response_Redirect_sSecretquestionTextX_H
