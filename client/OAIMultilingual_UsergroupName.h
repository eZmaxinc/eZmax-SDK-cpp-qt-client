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
 * OAIMultilingual_UsergroupName.h
 *
 * The name of the Usergroup
 */

#ifndef OAIMultilingual_UsergroupName_H
#define OAIMultilingual_UsergroupName_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMultilingual_UsergroupName : public OAIObject {
public:
    OAIMultilingual_UsergroupName();
    OAIMultilingual_UsergroupName(QString json);
    ~OAIMultilingual_UsergroupName() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSUsergroupName1() const;
    void setSUsergroupName1(const QString &s_usergroup_name1);
    bool is_s_usergroup_name1_Set() const;
    bool is_s_usergroup_name1_Valid() const;

    QString getSUsergroupName2() const;
    void setSUsergroupName2(const QString &s_usergroup_name2);
    bool is_s_usergroup_name2_Set() const;
    bool is_s_usergroup_name2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_usergroup_name1;
    bool m_s_usergroup_name1_isSet;
    bool m_s_usergroup_name1_isValid;

    QString s_usergroup_name2;
    bool m_s_usergroup_name2_isSet;
    bool m_s_usergroup_name2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMultilingual_UsergroupName)

#endif // OAIMultilingual_UsergroupName_H