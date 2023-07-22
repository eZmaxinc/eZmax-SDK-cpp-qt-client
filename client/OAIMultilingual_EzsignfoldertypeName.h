/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIMultilingual_EzsignfoldertypeName.h
 *
 * Name of the Ezsignfoldertype
 */

#ifndef OAIMultilingual_EzsignfoldertypeName_H
#define OAIMultilingual_EzsignfoldertypeName_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMultilingual_EzsignfoldertypeName : public OAIObject {
public:
    OAIMultilingual_EzsignfoldertypeName();
    OAIMultilingual_EzsignfoldertypeName(QString json);
    ~OAIMultilingual_EzsignfoldertypeName() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzsignfoldertypeName1() const;
    void setSEzsignfoldertypeName1(const QString &s_ezsignfoldertype_name1);
    bool is_s_ezsignfoldertype_name1_Set() const;
    bool is_s_ezsignfoldertype_name1_Valid() const;

    QString getSEzsignfoldertypeName2() const;
    void setSEzsignfoldertypeName2(const QString &s_ezsignfoldertype_name2);
    bool is_s_ezsignfoldertype_name2_Set() const;
    bool is_s_ezsignfoldertype_name2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_ezsignfoldertype_name1;
    bool m_s_ezsignfoldertype_name1_isSet;
    bool m_s_ezsignfoldertype_name1_isValid;

    QString s_ezsignfoldertype_name2;
    bool m_s_ezsignfoldertype_name2_isSet;
    bool m_s_ezsignfoldertype_name2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMultilingual_EzsignfoldertypeName)

#endif // OAIMultilingual_EzsignfoldertypeName_H
