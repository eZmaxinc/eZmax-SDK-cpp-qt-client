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
 * Multilingual_VersionhistoryDetail.h
 *
 * Detail of the Versionhistory
 */

#ifndef Multilingual_VersionhistoryDetail_H
#define Multilingual_VersionhistoryDetail_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Multilingual_VersionhistoryDetail : public Object {
public:
    Multilingual_VersionhistoryDetail();
    Multilingual_VersionhistoryDetail(QString json);
    ~Multilingual_VersionhistoryDetail() override;

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

    QString m_t_versionhistory_detail1;
    bool m_t_versionhistory_detail1_isSet;
    bool m_t_versionhistory_detail1_isValid;

    QString m_t_versionhistory_detail2;
    bool m_t_versionhistory_detail2_isSet;
    bool m_t_versionhistory_detail2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Multilingual_VersionhistoryDetail)

#endif // Multilingual_VersionhistoryDetail_H
