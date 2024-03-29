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
 * OAIMultilingual_VersionhistoryDetail.h
 *
 * Detail of the Versionhistory
 */

#ifndef OAIMultilingual_VersionhistoryDetail_H
#define OAIMultilingual_VersionhistoryDetail_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIMultilingual_VersionhistoryDetail : public OAIObject {
public:
    OAIMultilingual_VersionhistoryDetail();
    OAIMultilingual_VersionhistoryDetail(QString json);
    ~OAIMultilingual_VersionhistoryDetail() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTVersionhistoryDetail1() const;
    void setTVersionhistoryDetail1(const QString &t_versionhistory_detail1);
    bool is_t_versionhistory_detail1_Set() const;
    bool is_t_versionhistory_detail1_Valid() const;

    QString getTVersionhistoryDetail2() const;
    void setTVersionhistoryDetail2(const QString &t_versionhistory_detail2);
    bool is_t_versionhistory_detail2_Set() const;
    bool is_t_versionhistory_detail2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString t_versionhistory_detail1;
    bool m_t_versionhistory_detail1_isSet;
    bool m_t_versionhistory_detail1_isValid;

    QString t_versionhistory_detail2;
    bool m_t_versionhistory_detail2_isSet;
    bool m_t_versionhistory_detail2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIMultilingual_VersionhistoryDetail)

#endif // OAIMultilingual_VersionhistoryDetail_H
