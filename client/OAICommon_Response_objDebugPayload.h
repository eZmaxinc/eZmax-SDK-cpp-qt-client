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
 * OAICommon_Response_objDebugPayload.h
 *
 * This is a debug object containing debugging information on the actual function
 */

#ifndef OAICommon_Response_objDebugPayload_H
#define OAICommon_Response_objDebugPayload_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Response_objDebugPayload : public OAIObject {
public:
    OAICommon_Response_objDebugPayload();
    OAICommon_Response_objDebugPayload(QString json);
    ~OAICommon_Response_objDebugPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIVersionMin() const;
    void setIVersionMin(const qint32 &i_version_min);
    bool is_i_version_min_Set() const;
    bool is_i_version_min_Valid() const;

    qint32 getIVersionMax() const;
    void setIVersionMax(const qint32 &i_version_max);
    bool is_i_version_max_Set() const;
    bool is_i_version_max_Valid() const;

    QList<qint32> getARequiredPermission() const;
    void setARequiredPermission(const QList<qint32> &a_required_permission);
    bool is_a_required_permission_Set() const;
    bool is_a_required_permission_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 i_version_min;
    bool m_i_version_min_isSet;
    bool m_i_version_min_isValid;

    qint32 i_version_max;
    bool m_i_version_max_isSet;
    bool m_i_version_max_isValid;

    QList<qint32> a_required_permission;
    bool m_a_required_permission_isSet;
    bool m_a_required_permission_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_objDebugPayload)

#endif // OAICommon_Response_objDebugPayload_H
